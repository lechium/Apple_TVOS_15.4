//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CalLogFileWriter
{
    NSString *_path;	// 8 = 0x8
    int _fileDescriptor;	// 16 = 0x10
    _Bool _fileDescriptorIsValid;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000004d75d
@property(nonatomic) _Bool fileDescriptorIsValid; // @synthesize fileDescriptorIsValid=_fileDescriptorIsValid;
@property(nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)write:(id)arg1;	// IMP=0x000000000004d55b
- (id)description;	// IMP=0x000000000004d45c
- (void)dealloc;	// IMP=0x000000000004d418
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000004d0a4

@end

