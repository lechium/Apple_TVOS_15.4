//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject
{
    _Bool _exclusive;	// 8 = 0x8
    float _priority;	// 12 = 0xc
    __NSURLSessionTaskDependencyResourceIdentifier *_dependent;	// 16 = 0x10
    __NSURLSessionTaskDependencyResourceIdentifier *_parent;	// 24 = 0x18
    NSString *_dependentURLPath;	// 32 = 0x20
    NSString *_dependentMimeType;	// 40 = 0x28
    NSString *_parentURLPath;	// 48 = 0x30
    NSString *_parentMimeType;	// 56 = 0x38
}

+ (id)taskDependencyDescriptionWithParentMimeType:(id)arg1;	// IMP=0x00000000001be882
+ (id)taskDependencyDescriptionWithParentURLPath:(id)arg1;	// IMP=0x00000000001be84d
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentMimeType:(id)arg2;	// IMP=0x00000000001be816
+ (id)taskDependencyDescriptionWithMimeType:(id)arg1 parentURLPath:(id)arg2;	// IMP=0x00000000001be7de
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentMimeType:(id)arg2;	// IMP=0x00000000001be7a7
+ (id)taskDependencyDescriptionWithURLPath:(id)arg1 parentURLPath:(id)arg2;	// IMP=0x00000000001be76f
@property(readonly) NSString *parentMimeType; // @synthesize parentMimeType=_parentMimeType;
@property(readonly) NSString *parentURLPath; // @synthesize parentURLPath=_parentURLPath;
@property(readonly) NSString *dependentMimeType; // @synthesize dependentMimeType=_dependentMimeType;
@property(readonly) NSString *dependentURLPath; // @synthesize dependentURLPath=_dependentURLPath;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) float priority; // @synthesize priority=_priority;
- (id)description;	// IMP=0x00000000001be6e4
- (void)dealloc;	// IMP=0x00000000001be690

@end

