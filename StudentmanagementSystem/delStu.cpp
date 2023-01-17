void delStu()
{
    fstream fobj, fobj2;
    fobj.open("storage.dat", ios::binary | ios::out | ios::in);
    fobj2.open("temp.dat", ios::binary | ios::out);
    int rollno, found = 0;
    cout << "enter student roll no.";
    cin >> rollno;
    student temp;
    while (fobj.read(reinterpret_cast<char *>(&temp), sizeof(student)))
    {
        if (temp.rollno != rollno)
        {
            fobj2.write(reinterpret_cast<char *>(&temp), sizeof(student));
        }
        else
            found=1;
    }
    fobj.close();
    fobj2.close();
    remove("storage.dat");
    rename("temp.dat","storage.dat");
    if (!found)
    {
        cout << "Student Record Doesn't exist !!" << endl;
    }
    else
    {
        cout << "Student Record deleted Succesfully!!" << endl;
    }
}