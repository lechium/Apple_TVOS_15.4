//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (LibAppStoreDaemon)
- (id)lib_gzippedData;	// IMP=0x002000000006704b
- (void)lib_enumerateSubdataWithOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000066f32
@property(readonly, copy) NSString *lib_shortDigestMD5;
@property(readonly, copy) NSString *lib_digestMD5;
@end

