//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMICompressionHelper : HMFObject <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x00000000000bbbd0
+ (id)sharedInstance;	// IMP=0x00000000000baecb
- (int)unTarFileWithFd:(id)arg1 toPath:(id)arg2;	// IMP=0x00000000000bb8fc
- (int)unpackageTarData:(void *)arg1 size:(unsigned long long)arg2 parentDir:(const char *)arg3;	// IMP=0x00000000000bb5d4
- (void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2;	// IMP=0x00000000000bb0d6
- (char *)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int *)arg3;	// IMP=0x00000000000baf50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
