//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSBenchmarkService : NSObject
{
}

+ (void)runOSDAnalyzerWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016404
+ (void)runVTSecondPassModelWithConfig:(id)arg1 locale:(id)arg2 withUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016023
+ (void)runLstmPhsModelWithConfig:(id)arg1 withUrl:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015c60
+ (void)pingpong:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015935
+ (id)createBenchamrkXPCConnection;	// IMP=0x00000000000158bf

@end
