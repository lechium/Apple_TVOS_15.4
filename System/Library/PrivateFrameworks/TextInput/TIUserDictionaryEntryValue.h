//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>
#import <TextInput/TIUserDictionaryEntry-Protocol.h>

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry>
{
    NSString *_phrase;	// 8 = 0x8
    NSString *_shortcut;	// 16 = 0x10
    NSNumber *_timestamp;	// 24 = 0x18
}

+ (id)valueWithEntry:(id)arg1;	// IMP=0x000000000005bcc0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005bcb8
- (void).cxx_destruct;	// IMP=0x000000000005bc85
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (id)shortcutForSorting;	// IMP=0x000000000005bbf2
- (_Bool)matchesEntry:(id)arg1;	// IMP=0x000000000005baa4
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005b98e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005b84d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

