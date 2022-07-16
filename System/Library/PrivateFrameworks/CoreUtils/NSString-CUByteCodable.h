//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <CoreUtils/CUByteCodable-Protocol.h>

@interface NSString (CUByteCodable) <CUByteCodable>
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000cb836
- (id)encodedDataAndReturnError:(id *)arg1;	// IMP=0x00000000000cadf6
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000cad83
@end
