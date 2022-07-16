//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>
#import <ShareSheet/SHSheetUIPeopleSuggestion-Protocol.h>

@class INImage, NSArray, NSString;

@interface SHSheetPeopleSuggestion : NSObject <SHSheetUIPeopleSuggestion, NSSecureCoding>
{
    _Bool _isRestricted;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_transportBundleIdentifier;	// 32 = 0x20
    NSString *_conversationIdentifier;	// 40 = 0x28
    NSString *_derivedIntentIdentifier;	// 48 = 0x30
    NSArray *_contacts;	// 56 = 0x38
    NSArray *_recipientsHandles;	// 64 = 0x40
    INImage *_donatedImage;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d67b
- (void).cxx_destruct;	// IMP=0x000000000000e2a0
@property(nonatomic) _Bool isRestricted; // @synthesize isRestricted=_isRestricted;
@property(retain, nonatomic) INImage *donatedImage; // @synthesize donatedImage=_donatedImage;
@property(copy, nonatomic) NSArray *recipientsHandles; // @synthesize recipientsHandles=_recipientsHandles;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(copy, nonatomic) NSString *transportBundleIdentifier; // @synthesize transportBundleIdentifier=_transportBundleIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dc36
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d683

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
