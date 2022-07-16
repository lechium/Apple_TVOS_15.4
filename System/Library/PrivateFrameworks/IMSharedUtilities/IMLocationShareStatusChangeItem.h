//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface IMLocationShareStatusChangeItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    _Bool _actionable;	// 8 = 0x8
    _Bool _expired;	// 9 = 0x9
    long long _status;	// 16 = 0x10
    NSString *_otherCountryCode;	// 24 = 0x18
    NSString *_otherHandle;	// 32 = 0x20
    NSString *_otherUnformattedID;	// 40 = 0x28
    long long _direction;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000040463
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSString *otherUnformattedID; // @synthesize otherUnformattedID=_otherUnformattedID;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(retain, nonatomic) NSString *otherCountryCode; // @synthesize otherCountryCode=_otherCountryCode;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(nonatomic) _Bool actionable; // @synthesize actionable=_actionable;
@property(nonatomic) long long status; // @synthesize status=_status;
- (_Bool)isLastMessageCandidate;	// IMP=0x0000000000040958
- (id)copyDictionaryRepresentation;	// IMP=0x000000000004083d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000040723
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040556
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004046b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004033c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004020e
- (void)dealloc;	// IMP=0x00000000000401a8

@end

