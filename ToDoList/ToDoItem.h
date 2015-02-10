//
//  ToDoItem.h
//  ToDoList
//
//  Created by Kostadin Samardzhiev on 2/10/15.
//  Copyright (c) 2015 Kostadin Samardzhiev. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSData *creationData;

@end
