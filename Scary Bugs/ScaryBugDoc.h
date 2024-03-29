//
//  ScaryBugDoc.h
//  Scary Bugs
//
//  Created by Sean Behan on 4/14/13.
//  Copyright (c) 2013 Sean Behan. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc : NSObject

@property (strong) ScaryBugData *data;
@property (strong) NSImage *thumbImage;
@property (strong) NSImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(NSImage*)thumbImage fullImage:(NSImage *)fullImage;

@end
