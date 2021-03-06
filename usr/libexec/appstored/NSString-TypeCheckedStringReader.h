//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSNumber, NSURL;

@interface NSString (TypeCheckedStringReader)
@property(readonly) NSURL *tcr_url;
@property(readonly) unsigned long long tcr_unsignedLongLong;
- (_Bool)lib_skanIsVersionMultiAware;	// IMP=0x001000000010cfa2
- (_Bool)lib_skanIsVersionFidelityAware;	// IMP=0x001000000010cf7c
- (_Bool)lib_skanIsVersionConversionAware;	// IMP=0x001000000010cf56
- (_Bool)lib_skanIsValidVersion;	// IMP=0x001000000010cebe
- (id)lib_volumePath;	// IMP=0x001000000010cd10
- (id)lib_stringSantiziedAndTruncatedToLength:(unsigned long long)arg1;	// IMP=0x001000000010cbf3
- (id)lib_stringByLimitingToLength:(unsigned long long)arg1 addElipsis:(_Bool)arg2;	// IMP=0x001000000010cb37
- (id)lib_stringByCopyingUTF8StringWithLength:(unsigned long long)arg1;	// IMP=0x001000000010ca66
- (id)lib_stringByAppendingPathComponents:(id)arg1;	// IMP=0x001000000010c8c5
- (id)lib_digestMD5;	// IMP=0x001000000010c870
- (id)lib_accountDSIDValue;	// IMP=0x001000000010c827
@property(readonly) NSNumber *lib_numberValue;
@end

