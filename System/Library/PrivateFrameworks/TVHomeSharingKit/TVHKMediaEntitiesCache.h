//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/BSDescriptionProviding-Protocol.h>
#import <TVHomeSharingKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesCache : NSObject <BSDescriptionProviding, NSCopying>
{
    unsigned long long _revision;	// 8 = 0x8
}

@property(nonatomic) unsigned long long revision; // @synthesize revision=_revision;
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000999cf
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000009995e
- (id)succinctDescriptionBuilder;	// IMP=0x000000000009994a
- (id)succinctDescription;	// IMP=0x00000000000998fa
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009987a
- (void)clear;	// IMP=0x0000000000099866
- (void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2;	// IMP=0x0000000000099806

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

