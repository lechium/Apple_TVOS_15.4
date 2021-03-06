//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMRemoteObjectCoding-Protocol.h>
#import <IMSharedUtilities/NSCopying-Protocol.h>
#import <IMSharedUtilities/NSSecureCoding-Protocol.h>

@interface IMTUConversationItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>
{
    unsigned long long _flags;	// 8 = 0x8
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (_Bool)isFromMe;	// IMP=0x0000000000019221
- (id)conversationUUID;	// IMP=0x000000000001920f
- (id)copyDictionaryRepresentation;	// IMP=0x000000000001918a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019130
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000190b6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019051

@end

