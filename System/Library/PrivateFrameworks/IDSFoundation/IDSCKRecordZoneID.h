//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>
#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSCKRecordZoneID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_zoneName;	// 8 = 0x8
    NSString *_ownerName;	// 16 = 0x10
}

+ (id)alloc;	// IMP=0x000000000007a8c6
+ (Class)__class;	// IMP=0x000000000007a876
- (void).cxx_destruct;	// IMP=0x000000000007a8f4
@property(readonly, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

@end

