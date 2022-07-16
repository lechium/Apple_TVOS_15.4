//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSTimeErrorSequence : NSObject
{
    NSArray *_timeErrors;	// 8 = 0x8
}

+ (id)timeErrorSequenceWithTimestamps:(unsigned long long *)arg1 timeError:(long long *)arg2 count:(long long)arg3;	// IMP=0x0000000000006fbe
- (void).cxx_destruct;	// IMP=0x00000000000075bd
@property(readonly, copy, nonatomic) NSArray *timeErrors; // @synthesize timeErrors=_timeErrors;
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;	// IMP=0x00000000000072e2
- (_Bool)exportTimeErrorsToDirectoryURL:(id)arg1;	// IMP=0x00000000000072c9
- (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(_Bool)arg5;	// IMP=0x0000000000007135
- (id)initWithTimeErrors:(id)arg1;	// IMP=0x00000000000070b3

@end

