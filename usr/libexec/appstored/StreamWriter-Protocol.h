//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "Stream-Protocol.h"

@protocol StreamWriter <Stream>
@property(readonly) _Bool hasSpaceAvailable;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
@end

