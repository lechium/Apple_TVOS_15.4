//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtensions)
- (_Bool)mf_immutable;	// IMP=0x0000000000002b0c
- (id)mf_subdataWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000002a7c
- (id)mf_encodeBase64HeaderData;	// IMP=0x000000000000d09c
- (id)mf_encodeModifiedBase64;	// IMP=0x000000000000d08c
- (id)mf_encodeBase64;	// IMP=0x000000000000d073
- (id)mf_encodeBase64WithoutLineBreaks;	// IMP=0x000000000000cf6d
- (id)mf_decodeModifiedBase64;	// IMP=0x000000000000cf5c
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;	// IMP=0x000000000000cf50
- (id)mf_decodeBase64;	// IMP=0x000000000000cdfb
- (id)mf_decodeUuencoded;	// IMP=0x000000000000cd65
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;	// IMP=0x000000000000ccb3
- (id)mf_copyHexString;	// IMP=0x000000000000fee8
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// IMP=0x000000000000fd3e
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// IMP=0x000000000000fc89
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000000fc3f
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000000fbf1
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;	// IMP=0x000000000000fba6
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1;	// IMP=0x000000000000fb64
- (struct _NSRange)mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000000fabd
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000000fa50
- (id)mf_subdataFromIndex:(unsigned long long)arg1;	// IMP=0x000000000000fa0d
- (id)mf_subdataToIndex:(unsigned long long)arg1;	// IMP=0x000000000000f9f6
- (struct _NSRange)mf_rangeOfRFC822HeaderData;	// IMP=0x000000000000f734
- (id)mf_MD5Digest;	// IMP=0x000000000003c702
@end

