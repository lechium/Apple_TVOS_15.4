//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject
{
    PKPaymentDeviceMetadata *_deviceMetadata;	// 8 = 0x8
    unsigned long long _remaningFields;	// 16 = 0x10
    unsigned long long _requestedFields;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000020223
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long requestedFields; // @synthesize requestedFields=_requestedFields;
@property(nonatomic) unsigned long long remaningFields; // @synthesize remaningFields=_remaningFields;
@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;

@end

