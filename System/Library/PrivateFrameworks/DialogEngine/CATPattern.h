//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CATPattern : NSObject
{
}

+ (void)execute:(id)arg1 templateDir:(id)arg2 patternId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000000080d4a
+ (void)execute:(id)arg1 templateDir:(id)arg2 patternId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 options:(int)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000080d20
+ (void)execute:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000807af
+ (void)execute:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 options:(int)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000080784
+ (id)executeCAT:(id)arg1 templateDir:(basic_string_8e19b51d)arg2 catId:(basic_string_8e19b51d)arg3 requestType:(int)arg4 parameters:(id)arg5 globals:(id)arg6 callback:(id)arg7 options:(int)arg8 error:(id *)arg9;	// IMP=0x000000000008001a
+ (void)load:(id)arg1 patternId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007fffe
+ (void)load:(id)arg1 patternId:(id)arg2 options:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000007e9ab
+ (id)segment:(id)arg1 settings:(id)arg2;	// IMP=0x000000000007e61f

@end

