//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationToken : NSObject <NSSecureCoding>
{
    _Bool _removeSpaceBefore;	// 8 = 0x8
    _Bool _removeSpaceAfter;	// 9 = 0x9
    NSString *_text;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009077c1
- (void).cxx_destruct;	// IMP=0x0000000000907ba9
@property(readonly, nonatomic) _Bool removeSpaceAfter; // @synthesize removeSpaceAfter=_removeSpaceAfter;
@property(nonatomic) _Bool removeSpaceBefore; // @synthesize removeSpaceBefore=_removeSpaceBefore;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)_descriptionExtra;	// IMP=0x0000000000907b68
- (id)description;	// IMP=0x0000000000907a8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009079c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000090793a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000090785d
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3;	// IMP=0x00000000009077c9

@end

