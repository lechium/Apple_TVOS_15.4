//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSProcessInfo, NSArray, NSString;

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding>
{
    AMSProcessInfo *_clientInfo;	// 8 = 0x8
    NSArray *_destinations;	// 16 = 0x10
    NSArray *_events;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
}

+ (id)archiveClasses;	// IMP=0x00000000001188f5
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001188ed
- (void).cxx_destruct;	// IMP=0x0000000000118a3b
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001186d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000118598

@end

