//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARCustomPronData : NSObject
{
    shared_ptr_d15cec97 _data;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000649dd5
- (void).cxx_destruct;	// IMP=0x0000000000649dc7
@property(nonatomic) shared_ptr_d15cec97 data; // @synthesize data=_data;
- (id)getRejectedProns;	// IMP=0x0000000000649d34
- (id)getProns;	// IMP=0x0000000000649d1b
- (id)validationError;	// IMP=0x00000000006499d6
- (_Bool)isValid;	// IMP=0x00000000006499ca
- (id)initWithCustomPronData:(shared_ptr_d15cec97)arg1;	// IMP=0x0000000000649942

@end

