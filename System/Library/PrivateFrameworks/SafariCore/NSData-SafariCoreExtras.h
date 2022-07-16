//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (SafariCoreExtras)
+ (id)safari_dataWithHexString:(id)arg1;	// IMP=0x0000000000007d30
- (id)safari_dataByAppendingData:(id)arg1;	// IMP=0x0000000000007cca
@property(readonly, nonatomic) NSString *safari_descriptionWithoutSpaces;
@property(readonly, nonatomic) NSData *safari_SHA1Hash;
@property(readonly, nonatomic) unsigned long long safari_hashMD5;
@property(readonly, nonatomic) _Bool safari_dataAppearsToBeCompressed;
@property(readonly, nonatomic) NSData *safari_dataByDecompressingData;
@property(readonly, nonatomic) NSData *safari_dataByCompressingData;
@end
