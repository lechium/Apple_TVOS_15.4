//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor, CNGroup, NSNumber, NSString;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding>
{
    NSString *_groupIdentifier;	// 8 = 0x8
    long long _changeType;	// 16 = 0x10
    CNGroup *_group;	// 24 = 0x18
    CNChangeHistoryAnchor *_changeAnchor;	// 32 = 0x20
    NSNumber *_changeID;	// 40 = 0x28
    NSString *_externalID;	// 48 = 0x30
    NSString *_externalURI;	// 56 = 0x38
    NSString *_externalModificationTag;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002602
- (void).cxx_destruct;	// IMP=0x0000000000002845
@property(retain, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag=_externalModificationTag;
@property(retain, nonatomic) NSString *externalURI; // @synthesize externalURI=_externalURI;
@property(retain, nonatomic) NSString *externalID; // @synthesize externalID=_externalID;
@property(retain, nonatomic) NSNumber *changeID; // @synthesize changeID=_changeID;
@property(retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // @synthesize changeAnchor=_changeAnchor;
@property(retain, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)description;	// IMP=0x000000000000260a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002555
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002384
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5;	// IMP=0x000000000000225f

@end
