//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>

@class NSDictionary;

@interface CSLocalizedString : NSString <CSCoderEncoder>
{
    _Bool _didTrySettingDefaultString;	// 8 = 0x8
    NSString *_defaultString;	// 16 = 0x10
    NSDictionary *_localizedStrings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e144
- (void).cxx_destruct;	// IMP=0x000000000001e2c2
@property(readonly, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property(nonatomic) _Bool didTrySettingDefaultString; // @synthesize didTrySettingDefaultString=_didTrySettingDefaultString;
@property(readonly, nonatomic) NSString *defaultString; // @synthesize defaultString=_defaultString;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001e20f
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001e1aa
- (unsigned long long)length;	// IMP=0x000000000001e14c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001e139
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e04a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dfd1
- (id)localizedString;	// IMP=0x000000000001db41
- (id)initWithLocalizedStrings:(id)arg1;	// IMP=0x000000000001da26
- (void)encodeWithCSCoder:(id)arg1;	// IMP=0x00000000000222ce

@end

