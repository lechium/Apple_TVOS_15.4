//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;
@protocol NSTextLocation;

@interface NSTextSelection : NSObject <NSSecureCoding>
{
    _Bool _transient;	// 8 = 0x8
    _Bool _logical;	// 9 = 0x9
    NSArray *_textRanges;	// 16 = 0x10
    long long _granularity;	// 24 = 0x18
    long long _affinity;	// 32 = 0x20
    double _anchorPositionOffset;	// 40 = 0x28
    id <NSTextLocation> _secondarySelectionLocation;	// 48 = 0x30
    NSDictionary *_typingAttributes;	// 56 = 0x38
    id <NSTextLocation> _selectionAnchorLocation;	// 64 = 0x40
}

+ (id)descriptionForAffinity:(long long)arg1;	// IMP=0x00000000000fbed8
+ (id)descriptionForGranularity:(long long)arg1;	// IMP=0x00000000000fbe77
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fb995
@property(retain) id <NSTextLocation> selectionAnchorLocation; // @synthesize selectionAnchorLocation=_selectionAnchorLocation;
@property(copy) NSDictionary *typingAttributes; // @synthesize typingAttributes=_typingAttributes;
@property(retain) id <NSTextLocation> secondarySelectionLocation; // @synthesize secondarySelectionLocation=_secondarySelectionLocation;
@property(getter=isLogical) _Bool logical; // @synthesize logical=_logical;
@property double anchorPositionOffset; // @synthesize anchorPositionOffset=_anchorPositionOffset;
@property(getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(readonly) long long affinity; // @synthesize affinity=_affinity;
@property(readonly) long long granularity; // @synthesize granularity=_granularity;
@property(readonly, copy) NSArray *textRanges; // @synthesize textRanges=_textRanges;
- (id)description;	// IMP=0x00000000000fbf02
- (id)textSelectionWithTextRanges:(id)arg1;	// IMP=0x00000000000fbd64
- (_Bool)containsLocation:(id)arg1;	// IMP=0x00000000000fbd4b
- (id)textRangeContainingLocation:(id)arg1;	// IMP=0x00000000000fbb82
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fbaa0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fb99d
- (void)dealloc;	// IMP=0x00000000000fb93d
- (id)initWithLocation:(id)arg1 affinity:(long long)arg2;	// IMP=0x00000000000fb8de
- (id)initWithRange:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;	// IMP=0x00000000000fb859
- (id)initWithRanges:(id)arg1 affinity:(long long)arg2 granularity:(long long)arg3;	// IMP=0x00000000000fb7ec

@end
