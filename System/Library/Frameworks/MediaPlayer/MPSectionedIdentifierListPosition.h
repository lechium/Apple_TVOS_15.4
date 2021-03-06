//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSString;

@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding>
{
    NSString *_sectionIdentifier;	// 8 = 0x8
    NSString *_itemIdentifier;	// 16 = 0x10
    long long _entryType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000221d60
+ (id)positionForTailOfSection:(id)arg1;	// IMP=0x0000000000221d0c
+ (id)positionForHeadOfSection:(id)arg1;	// IMP=0x0000000000221cb8
+ (id)positionForItem:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000221c22
- (void).cxx_destruct;	// IMP=0x0000000000221bfa
@property(readonly, nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000221b52
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000221a5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002219a4
- (unsigned long long)hash;	// IMP=0x0000000000221955
- (id)description;	// IMP=0x0000000000221883
- (id)_init;	// IMP=0x0000000000221854

@end

