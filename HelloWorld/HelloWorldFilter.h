//
//  HelloWorldFilter.h
//  HelloWorld
//
//  Copyright (c) 2008 Joris. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OsiriX Headers/PluginFilter.h>

@interface HelloWorldFilter : PluginFilter {

}

- (long) filterImage:(NSString*) menuName;

@end
