//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface IXPromisedStreamingZipTransferSeed
{
    unsigned long long _archiveBytesConsumed;	// 8 = 0x8
    unsigned long long _archiveSizeBytes;	// 16 = 0x10
    NSDictionary *_szOptions;	// 24 = 0x18
    NSString *_sandboxExtensionToken;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000098d4
- (void).cxx_destruct;	// IMP=0x0020000000009a4f
@property(copy, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000098dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000009760
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000095e7

@end

