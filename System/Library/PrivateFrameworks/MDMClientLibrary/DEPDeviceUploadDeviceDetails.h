//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MDMClientLibrary/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEPDeviceUploadDeviceDetails : NSObject <NSSecureCoding>
{
    NSString *_serialNumber;	// 8 = 0x8
    NSString *_deviceUploadStatus;	// 16 = 0x10
    NSString *_errorMessage;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009daf
- (void).cxx_destruct;	// IMP=0x000000000000a054
@property(readonly, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) NSString *deviceUploadStatus; // @synthesize deviceUploadStatus=_deviceUploadStatus;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)initWithDict:(id)arg1;	// IMP=0x0000000000009f4a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009e3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009db7

@end
