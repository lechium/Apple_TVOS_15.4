//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NWURLSessionStreamTask
{
}

- (void)startSecureConnection;	// IMP=0x0000000000050f60
- (void)closeRead;	// IMP=0x0000000000050f50
- (void)closeWrite;	// IMP=0x0000000000050f40
- (void)captureStreams;	// IMP=0x0000000000050f30
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050f20
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000050f00
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000050ea0

@end
