//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSSecureCoding-Protocol.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding>
{
    NSString *_localizedTitle;	// 8 = 0x8
    NSString *_localizedBody;	// 16 = 0x10
    _Bool _isLongForm;	// 24 = 0x18
}

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;	// IMP=0x000000000006d9d2
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006d926
- (void).cxx_destruct;	// IMP=0x000000000006df5e
@property(nonatomic) _Bool isLongForm; // @synthesize isLongForm=_isLongForm;
@property(retain, nonatomic) NSString *localizedBody; // @synthesize localizedBody=_localizedBody;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)serializedDictionary;	// IMP=0x000000000006de77
- (unsigned long long)hash;	// IMP=0x000000000006de38
- (_Bool)isEqualToProfileWarning:(id)arg1;	// IMP=0x000000000006dc57
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006dbca
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006dad5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006da4d
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(_Bool)arg3;	// IMP=0x000000000006d92e

@end

