//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding>
{
    _Bool _parsingStandaloneMessage;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_method;	// 32 = 0x20
    long long _status;	// 40 = 0x28
    NSDictionary *_headers;	// 48 = 0x30
    NSString *_requestClassName;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b2d47
- (void).cxx_destruct;	// IMP=0x00000000001b3181
@property(nonatomic) _Bool parsingStandaloneMessage; // @synthesize parsingStandaloneMessage=_parsingStandaloneMessage;
@property(retain, nonatomic) NSString *requestClassName; // @synthesize requestClassName=_requestClassName;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b2ee3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b2d4f

@end
