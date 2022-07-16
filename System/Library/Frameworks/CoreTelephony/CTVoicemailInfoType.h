//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _available;	// 8 = 0x8
    _Bool _isNetworkOriginated;	// 9 = 0x9
    _Bool _isVoiceMailMWI;	// 10 = 0xa
    NSString *_url;	// 16 = 0x10
    NSNumber *_count;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a6904
- (void).cxx_destruct;	// IMP=0x00000000000a6978
@property(nonatomic) _Bool isVoiceMailMWI; // @synthesize isVoiceMailMWI=_isVoiceMailMWI;
@property(nonatomic) _Bool isNetworkOriginated; // @synthesize isNetworkOriginated=_isNetworkOriginated;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a67e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a6733
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a66df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a667c
- (_Bool)isEqualToCTVoicemailInfoType:(id)arg1;	// IMP=0x00000000000a63f8
- (id)initWithParam:(id)arg1 available:(_Bool)arg2 count:(id)arg3 isNetworkOriginated:(_Bool)arg4 isVoiceMailMWI:(_Bool)arg5;	// IMP=0x00000000000a6329
- (id)init;	// IMP=0x00000000000a6258
- (id)description;	// IMP=0x00000000000a60dc

@end

