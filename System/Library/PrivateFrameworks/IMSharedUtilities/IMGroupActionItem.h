//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface IMGroupActionItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    long long _actionType;	// 8 = 0x8
    NSString *_otherCountryCode;	// 16 = 0x10
    NSString *_otherHandle;	// 24 = 0x18
    NSString *_otherUnformattedID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000020f57
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (id)fileTransferGUIDs;	// IMP=0x00000000000213f6
- (_Bool)isCompatibleWithMiC;	// IMP=0x00000000000213dd
- (_Bool)actionIsGroupPhoto;	// IMP=0x00000000000213a0
- (id)copyDictionaryRepresentation;	// IMP=0x00000000000212be
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021115
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002102b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020f5f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020e49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020d8f
- (void)dealloc;	// IMP=0x0000000000020d29

@end
