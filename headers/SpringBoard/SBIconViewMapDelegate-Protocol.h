/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@protocol SBIconViewMapDelegate <NSObject>
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (unsigned int)viewMap:(id)arg1 maxRecycledIconViewsOfClass:(Class)arg2;

@optional
- (unsigned int)viewMap:(id)arg1 numberOfViewsToPrepareOfClass:(Class)arg2;
- (id)viewMapShouldPrepareViewsOfClasses:(id)arg1;
@end

