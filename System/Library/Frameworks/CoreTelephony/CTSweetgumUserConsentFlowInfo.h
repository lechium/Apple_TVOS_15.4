//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding>
{
    NSString *_webURL;	// 8 = 0x8
    NSString *_postData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d593
- (void).cxx_destruct;	// IMP=0x000000000001d5d1
@property(retain, nonatomic) NSString *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d4b9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d44b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d278
- (id)description;	// IMP=0x000000000001d18e
- (id)init;	// IMP=0x000000000001d12a

@end

