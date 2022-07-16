//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct BatchBeepCanceller;

struct unique_ptr<BatchBeepCanceller, std::default_delete<BatchBeepCanceller>> {
    struct __compressed_pair<BatchBeepCanceller *, std::default_delete<BatchBeepCanceller>> {
        struct BatchBeepCanceller *__value_;
    } __ptr_;
};

struct unique_ptr<CSAudioZeroFilterImpl<unsigned short>, std::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
    struct __compressed_pair<CSAudioZeroFilterImpl<unsigned short>*, std::default_delete<CSAudioZeroFilterImpl<unsigned short>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
    struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short>*, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> {
        void *__value_;
    } __ptr_;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<short, std::allocator<short>> {
    short *__begin_;
    short *__end_;
    struct __compressed_pair<short *, std::allocator<short>> {
        short *__value_;
    } __end_cap_;
};
