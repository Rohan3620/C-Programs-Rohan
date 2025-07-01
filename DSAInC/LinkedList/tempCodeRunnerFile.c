printf("Enter data to insert at end: ");
    scanf("%d", &data);
    head = insertAtEnd(head, data);
    printf("List after insertion at end: ");
    printList(head);