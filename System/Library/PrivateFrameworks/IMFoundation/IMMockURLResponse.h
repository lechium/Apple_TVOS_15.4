//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSSecureCoding-Protocol.h>

@class NSData, NSHTTPURLResponse, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding>
{
    NSHTTPURLResponse *_response;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_requestBodyKeyPath;	// 24 = 0x18
    NSString *_mockID;	// 32 = 0x20
}

+ (id)objectFromPlist:(id)arg1;	// IMP=0x000000000001b83e
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b836
- (void).cxx_destruct;	// IMP=0x000000000001bb2e
@property(copy) NSString *mockID; // @synthesize mockID=_mockID;
@property(copy) NSString *requestBodyKeyPath; // @synthesize requestBodyKeyPath=_requestBodyKeyPath;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b6c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b5aa

@end

