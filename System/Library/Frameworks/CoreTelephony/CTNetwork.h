//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTNetwork : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_plmn;	// 16 = 0x10
    NSString *_rat;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001adef
- (void).cxx_destruct;	// IMP=0x000000000001ae48
@property(retain, nonatomic) NSString *rat; // @synthesize rat=_rat;
@property(retain, nonatomic) NSString *plmn; // @synthesize plmn=_plmn;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001acdf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001abfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001aac7
- (id)description;	// IMP=0x000000000001a9a6

@end
