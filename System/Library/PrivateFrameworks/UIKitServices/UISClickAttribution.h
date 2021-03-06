//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitServices/NSCopying-Protocol.h>
#import <UIKitServices/NSSecureCoding-Protocol.h>

@class BKSHIDEventAuthenticationMessage, NSString, NSURL;

@interface UISClickAttribution : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _sourceIdentifier;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    NSURL *_reportEndpoint;	// 24 = 0x18
    NSString *_sourceDescription;	// 32 = 0x20
    NSString *_purchaser;	// 40 = 0x28
    BKSHIDEventAuthenticationMessage *_eventMessage;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009c35
- (void).cxx_destruct;	// IMP=0x0000000000009f90
@property(readonly, copy, nonatomic) BKSHIDEventAuthenticationMessage *eventMessage; // @synthesize eventMessage=_eventMessage;
@property(readonly, copy, nonatomic) NSString *purchaser; // @synthesize purchaser=_purchaser;
@property(readonly, copy, nonatomic) NSString *sourceDescription; // @synthesize sourceDescription=_sourceDescription;
@property(readonly, copy, nonatomic) NSURL *reportEndpoint; // @synthesize reportEndpoint=_reportEndpoint;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) unsigned char sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (unsigned long long)hash;	// IMP=0x0000000000009eca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009c48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009c3d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009b70
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000997d
- (id)clickAttributionWithReportEndpoint:(id)arg1;	// IMP=0x0000000000009864
- (id)initWithSourceIdentifier:(unsigned char)arg1 destinationURL:(id)arg2 reportEndpoint:(id)arg3 sourceDescription:(id)arg4 purchaser:(id)arg5 eventMessage:(id)arg6;	// IMP=0x000000000000966c

@end

