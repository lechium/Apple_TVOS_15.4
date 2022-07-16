//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/NSCopying-Protocol.h>
#import <FrontBoard/NSMutableCopying-Protocol.h>

@class NSMutableIndexSet, NSSet;

@interface FBWorkspaceConnectionsState : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableIndexSet *_pidSet;	// 8 = 0x8
}

+ (id)deserializeLength:(out unsigned long long *)arg1 fromReader:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b6bb
+ (unsigned long long)minimumSerializedDataLength;	// IMP=0x000000000003b324
- (void).cxx_destruct;	// IMP=0x000000000003bc42
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003bc13
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003bc08
- (id)description;	// IMP=0x000000000003b9bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b92c
- (unsigned long long)hash;	// IMP=0x000000000003b916
- (long long)serializeToWriter:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b34e
@property(readonly, nonatomic) unsigned long long serializedDataLength;
- (id)mutableCopy;	// IMP=0x000000000003b2f5
- (id)copy;	// IMP=0x000000000003b2c6
@property(readonly, copy, nonatomic) NSSet *workspaceIdentities;
- (id)_initWithIndexSet:(id)arg1;	// IMP=0x000000000003b0d9
- (id)init;	// IMP=0x000000000003b0c5

@end

