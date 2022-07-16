//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFOStream-Protocol.h>

@class NSString;

@interface PFFileIOStream <PFOStream>
{
}

- (_Bool)truncateLength:(long long)arg1;	// IMP=0x000000000000f995
- (_Bool)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;	// IMP=0x000000000000f8ea
- (_Bool)writeStream:(id)arg1;	// IMP=0x000000000000f88e
- (_Bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;	// IMP=0x000000000000f7c0
- (_Bool)reserveLength:(long long)arg1;	// IMP=0x000000000000f70c
- (_Bool)openStream;	// IMP=0x000000000000f5fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

