//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    IDSCKRecordZoneID *_zoneID;	// 8 = 0x8
}

+ (id)alloc;	// IMP=0x000000000007a96c
+ (Class)__class;	// IMP=0x000000000007a91c
- (void).cxx_destruct;	// IMP=0x000000000007a990
@property(readonly, nonatomic) IDSCKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

@end

