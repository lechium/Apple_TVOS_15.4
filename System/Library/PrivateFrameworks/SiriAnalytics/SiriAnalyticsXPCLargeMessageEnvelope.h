//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriAnalytics/NSCopying-Protocol.h>
#import <SiriAnalytics/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_largeMessagePath;	// 8 = 0x8
    NSData *_serializedDataUploadMessage;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009c0e
- (void).cxx_destruct;	// IMP=0x0000000000009d72
@property(readonly, copy, nonatomic) NSData *serializedDataUploadMessage; // @synthesize serializedDataUploadMessage=_serializedDataUploadMessage;
@property(readonly, copy, nonatomic) NSString *largeMessagePath; // @synthesize largeMessagePath=_largeMessagePath;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009c84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009c16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009c03
- (id)initWithLargeMessagePath:(id)arg1 serializedDataUploadMessage:(id)arg2;	// IMP=0x0000000000009b4a

@end

