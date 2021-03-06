//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSSecureCoding-Protocol.h>

@class CNChangeHistoryAnchor, NSArray, NSData, NSString;

@interface CNChangeHistoryFetchRequest <NSSecureCoding>
{
    _Bool _shouldUnifyResults;	// 8 = 0x8
    _Bool _mutableObjects;	// 9 = 0x9
    _Bool _includeGroupChanges;	// 10 = 0xa
    _Bool _enforceClientIdentifier;	// 11 = 0xb
    _Bool _includeChangeAnchors;	// 12 = 0xc
    _Bool _includeChangeIDs;	// 13 = 0xd
    _Bool _includeExternalIDs;	// 14 = 0xe
    _Bool _includeImagesChanged;	// 15 = 0xf
    _Bool _includeLabeledValueChanges;	// 16 = 0x10
    _Bool _includeLinkingChanges;	// 17 = 0x11
    _Bool _includeMeCardChanges;	// 18 = 0x12
    NSData *_startingToken;	// 24 = 0x18
    NSArray *_additionalContactKeyDescriptors;	// 32 = 0x20
    NSArray *_excludedTransactionAuthors;	// 40 = 0x28
    long long _resultType;	// 48 = 0x30
    NSString *_clientIdentifier;	// 56 = 0x38
    NSString *_containerIdentifier;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ee44
- (void).cxx_destruct;	// IMP=0x000000000001f635
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool includeMeCardChanges; // @synthesize includeMeCardChanges=_includeMeCardChanges;
@property(nonatomic) _Bool includeLinkingChanges; // @synthesize includeLinkingChanges=_includeLinkingChanges;
@property(nonatomic) _Bool includeLabeledValueChanges; // @synthesize includeLabeledValueChanges=_includeLabeledValueChanges;
@property(nonatomic) _Bool includeImagesChanged; // @synthesize includeImagesChanged=_includeImagesChanged;
@property(nonatomic) _Bool includeExternalIDs; // @synthesize includeExternalIDs=_includeExternalIDs;
@property(nonatomic) _Bool includeChangeIDs; // @synthesize includeChangeIDs=_includeChangeIDs;
@property(nonatomic) _Bool includeChangeAnchors; // @synthesize includeChangeAnchors=_includeChangeAnchors;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) long long resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic, getter=shouldEnforceClientIdentifer) _Bool enforceClientIdentifier; // @synthesize enforceClientIdentifier=_enforceClientIdentifier;
@property(copy, nonatomic) NSArray *excludedTransactionAuthors; // @synthesize excludedTransactionAuthors=_excludedTransactionAuthors;
@property(nonatomic) _Bool includeGroupChanges; // @synthesize includeGroupChanges=_includeGroupChanges;
@property(nonatomic) _Bool mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) _Bool shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(copy, nonatomic) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(copy, nonatomic) NSData *startingToken; // @synthesize startingToken=_startingToken;
@property(nonatomic) _Bool unifyResults;
- (void)acceptVisitor:(id)arg1;	// IMP=0x000000000001f3ec
- (void)setStartingAnchor:(id)arg1;	// IMP=0x000000000001f39d
@property(readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
- (id)description;	// IMP=0x000000000001ee4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ec55
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e8f8
- (id)initWithStartingAnchor:(id)arg1;	// IMP=0x000000000001e85f
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x000000000001e758

@end

