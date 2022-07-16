//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BMRBiomeDSLRunner : NSObject
{
    NSDictionary *_dslAllowList;	// 8 = 0x8
}

+ (id)testingDSL1;	// IMP=0x0040000000003944
+ (double)roundToSigFigs:(double)arg1 sigFigs:(unsigned long long)arg2;	// IMP=0x00100000000038bc
+ (id)_testingAllowList;	// IMP=0x00100000000038af
+ (id)_defaultAllowList;	// IMP=0x00100000000038a2
- (void).cxx_destruct;	// IMP=0x0020000000002dbe
- (_Bool)_validateSQLTransform:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000029de
- (_Bool)_validateStreamFieldAccess:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000024aa
- (_Bool)_validateArgumentTransform:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000021e7
- (_Bool)_validateClassTransform:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000204b
- (_Bool)_validateStreamAccess:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002018
- (id)_getFieldAllowListForStream:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001d3f
- (_Bool)validateDSL:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000018a4
- (id)runDSL:(id)arg1 outputAllowList:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000001365
- (id)initWithDSLAllowList:(id)arg1;	// IMP=0x00100000000012fa
- (id)init;	// IMP=0x001000000000129f

@end
