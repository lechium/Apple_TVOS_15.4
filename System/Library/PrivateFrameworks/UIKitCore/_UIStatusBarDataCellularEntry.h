//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataCellularEntry
{
    _Bool _wifiCallingEnabled;	// 48 = 0x30
    _Bool _callForwardingEnabled;	// 49 = 0x31
    _Bool _showsSOSWhenDisabled;	// 50 = 0x32
    long long _type;	// 56 = 0x38
    NSString *_string;	// 64 = 0x40
    NSString *_crossfadeString;	// 72 = 0x48
    NSString *_badgeString;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000c9309f
- (void).cxx_destruct;	// IMP=0x0000000000c93a3b
@property(nonatomic) _Bool showsSOSWhenDisabled; // @synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled;
@property(nonatomic) _Bool callForwardingEnabled; // @synthesize callForwardingEnabled=_callForwardingEnabled;
@property(nonatomic) _Bool wifiCallingEnabled; // @synthesize wifiCallingEnabled=_wifiCallingEnabled;
@property(copy, nonatomic) NSString *badgeString; // @synthesize badgeString=_badgeString;
@property(copy, nonatomic) NSString *crossfadeString; // @synthesize crossfadeString=_crossfadeString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000c9377e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c933a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c931db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c930a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c92fae
- (unsigned long long)hash;	// IMP=0x0000000000c92edc

@end
