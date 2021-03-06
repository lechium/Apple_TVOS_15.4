//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface PKPaymentInstructions : NSObject
{
    long long _version;	// 8 = 0x8
    NSData *_instructionsData;	// 16 = 0x10
    NSData *_signatureData;	// 24 = 0x18
    NSData *_fortifiedInstructionsData;	// 32 = 0x20
    NSData *_fortifiedSignatureData;	// 40 = 0x28
    NSDictionary *_instructionsDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002886a8
@property(retain, nonatomic) NSDictionary *instructionsDictionary; // @synthesize instructionsDictionary=_instructionsDictionary;
@property(retain, nonatomic) NSData *fortifiedSignatureData; // @synthesize fortifiedSignatureData=_fortifiedSignatureData;
@property(retain, nonatomic) NSData *fortifiedInstructionsData; // @synthesize fortifiedInstructionsData=_fortifiedInstructionsData;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(retain, nonatomic) NSData *instructionsData; // @synthesize instructionsData=_instructionsData;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
- (id)_imageDataForImageWithKey:(id)arg1 format:(id *)arg2;	// IMP=0x000000000028853b
- (struct CGDataProvider *)_createImageDataProviderForImageKey:(id)arg1;	// IMP=0x0000000000288492
- (void)_pruneDirectoryAtURL:(id)arg1;	// IMP=0x0000000000288224
- (_Bool)archiveToDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000287a78
- (struct CGImage *)imageForKey:(id)arg1;	// IMP=0x0000000000287a37
@property(readonly, nonatomic) NSArray *allImageKeys;
- (id)description;	// IMP=0x00000000002876c6
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000028746e

@end

