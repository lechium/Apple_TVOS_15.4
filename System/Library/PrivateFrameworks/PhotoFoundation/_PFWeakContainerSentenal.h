//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFWeakContainer;

@interface _PFWeakContainerSentenal : NSObject
{
    PFWeakContainer *_container;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0000000000014365
- (oneway void)release;	// IMP=0x000000000001430a
- (void)removeAssociationWithObject:(id)arg1;	// IMP=0x00000000000142be
- (void)associateWithObject:(id)arg1;	// IMP=0x0000000000014291
- (_Bool)isAssociatedWithObject:(id)arg1;	// IMP=0x000000000001426f
- (void)clearContainer;	// IMP=0x000000000001425f
- (void)dealloc;	// IMP=0x0000000000014221
- (id)initWithContainer:(id)arg1;	// IMP=0x00000000000141cf

@end
