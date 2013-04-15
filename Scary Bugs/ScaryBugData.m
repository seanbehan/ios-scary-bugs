//
//  ScaryBugData.m
//  Scary Bugs
//
//  Created by Sean Behan on 4/14/13.
//  Copyright (c) 2013 Sean Behan. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData


- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
